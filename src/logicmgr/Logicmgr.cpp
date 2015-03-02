/*
 * File:   Logicmgr.cpp
 * Author: traveler
 *
 * Created on December 18, 2012, 6:13 PM
 */

#include "Logicmgr.h"
#include <dlfcn.h>
#include "IKernel.h"

Logicmgr * Logicmgr::m_pSelf = NULL;

Logicmgr::Logicmgr() {

}

ILogicmgr * Logicmgr::GetInstance() {
    if (NULL == m_pSelf) {
        m_pSelf = NEW Logicmgr;
        if (!m_pSelf->Redry()) {
            TASSERT(false, "Logicmgr cant ready");
            delete m_pSelf;
            m_pSelf = NULL;
        }
    }

    return m_pSelf;
}

bool Logicmgr::Redry() {
    return true;
}

bool Logicmgr::Initialize() {
    //    if (NULL == (m_pKernel = Kernel::GetInstance()) ||
    //            NULL == (m_pConfigManage = ConfigManage::GetInstance()) ||
    //            NULL == (m_pLogSystem = LogSystem::GetInstance())) {
    //
    //        TASSERT(false ,"Logicmgr::Initialize failed|Get Kernel,ConfigManage, LogSystem error");
    //
    //        return false;
    //    }
    //    const CIniConfig * baseconfig = m_pConfigManage->GetConfig(KERNEL_CONFIG_BASE_INI);
    //    if (NULL == baseconfig) {
    //        LOG_ERROR(log, 128, "Logicmgr::Initialize failed|Get BaseConfig Error");
    //        Assert(false);
    //        return NULL;
    //    }
    //    const char * pStrDllPath = baseconfig->GetStringConfig("Modules", "Path");
    //    const char * pStrDllList = baseconfig->GetStringConfig("Modules", "DLL");
    //
    //    if ("" == string(pStrDllPath) ||
    //            "" == string(pStrDllList)) {
    //        LOG_ERROR(log, 128, "Logicmgr::Initialize failed|Get DllPaht or DllList error");
    //
    //        Assert(false);
    //        return false;
    //    }
    //
    //    VarList dlls;
    //    SafeSplitString(pStrDllList, ";", dlls);
    //    UI32 ndllcount = dlls.Count();
    //    for (UI32 i = 0; i < ndllcount; i++) {
    //        char dllpath[256];
    //        memset(dllpath, 0, 256);
    //        snprintf(dllpath, 256, "%s/%s/%s", GetAppPath(), pStrDllPath, dlls.GetString(i));
    //
    //        void * handle = dlopen(dllpath, RTLD_LAZY);
    //        if (NULL == handle) {
    //            LOG_ERROR("Dll %s is not exists, Error : %s", dllpath, dlerror());
    //            Assert(false);
    //            return false;
    //        }
    //
    //        m_vctDllHandle.push_back(handle);
    //        
    //        GetModuleFun function = (GetModuleFun) dlsym(handle, "GetLogicModule");
    //
    //        if (NULL == function) {
    //            LOG_ERROR("GetLogicModule from dll %s failed", dllpath);
    //            
    //            Assert(false);
    //            return false;
    //        }
    //
    //        IModule * plogic = function();
    //
    //        if (NULL == plogic) {
    //            LOG_ERROR("IModule point is NULL");
    //            Assert(false);
    //        }
    //
    //        do {
    //            const char * pName = plogic->GetName();
    //            map<string, IModule *>::iterator itor = m_mapModules.find(pName);
    //            if (itor != m_mapModules.end()) {
    //                LOG_ERROR("LogicModule Name %s is exists", pName);
    //                Assert(false);
    //                return false;
    //            }
    //
    //            m_mapModules.insert(make_pair(pName, plogic));
    //            plogic = plogic->GetNext();
    //        } while (plogic != NULL);
    //
    //        map<string, IModule *>::iterator itor = m_mapModules.begin();
    //        map<string, IModule *>::iterator iend = m_mapModules.end();
    //        while (itor != iend) {
    //            if (NULL == itor->second) {
    //                LOG_ERROR("There is no LogciModule exists");
    //                Assert(false);
    //                return false;
    //            }
    //            itor->second->Initialize(m_pKernel);
    //            itor++;
    //        }
    //        
    //        itor = m_mapModules.begin();
    //        while (itor != iend) {
    //            if (NULL == itor->second) {
    //                LOG_ERROR("There is no LogciModule exists");
    //                Assert(false);
    //                return false;
    //            }
    //            itor->second->DelayInitialize(m_pKernel);
    //            itor++;
    //        }
    //    }

    return true;
}

bool Logicmgr::Destory() {
    if (m_pSelf != NULL) {
        delete m_pSelf;
        m_pSelf = NULL;
    }

    return true;
}

Logicmgr::~Logicmgr() {
    //    map<string, IModule *>::iterator itor = m_mapModules.begin();
    //    map<string, IModule *>::iterator iend = m_mapModules.end();
    //    while (itor != iend) {
    //        TASSERT(itor->second != NULL, "where is module?");
    //        if (NULL != itor->second) {
    //            itor->second->Destroy(m_pKernel);
    //            delete itor->second;
    //            itor->second = NULL;
    //        }
    //        itor++;
    //    }
    //    m_mapModules.clear();
    //    
    //    vector<void *>::iterator ivbegin = m_vctDllHandle.begin();
    //    vector<void *>::iterator ivend = m_vctDllHandle.end();
    //    while(ivbegin != ivend) {
    //        if(*ivbegin != NULL) {
    //            dlclose(*ivbegin);
    //        }
    //        ivbegin ++;
    //    }
    //    m_vctDllHandle.clear();
}

IModule * Logicmgr::FindModule(const char * pStrModuleName) {
    map<string, IModule *>::iterator itor = m_mapModules.find(pStrModuleName);
    if (itor == m_mapModules.end() || NULL == itor->second) {
        TASSERT(false, (string("There is no LogciModule named %s") + pStrModuleName).c_str());
        return NULL;
    }

    return itor->second;
}