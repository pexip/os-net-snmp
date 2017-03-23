/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent. 
 */


#ifndef _MIBGROUP_MTETRIGGEREXISTENCETABLE_H
#define _MIBGROUP_MTETRIGGEREXISTENCETABLE_H


/*
 * we may use header_complex from the header_complex module 
 */


config_require(header_complex)

    /*
     * enum definitions from the covered mib sections 
     */
#define MTETRIGGEREXISTENCETEST_PRESENT          0x80
#define MTETRIGGEREXISTENCETEST_ABSENT           0x40
#define MTETRIGGEREXISTENCETEST_CHANGED          0x20
#define MTETRIGGEREXISTENCESTARTUP_PRESENT       0x80
#define MTETRIGGEREXISTENCESTARTUP_ABSENT        0x40
    /*
     * function prototypes 
     */
     void            init_mteTriggerExistenceTable(void);
     FindVarMethod   var_mteTriggerExistenceTable;

#ifndef NETSNMP_NO_WRITE_SUPPORT
     WriteMethod     write_mteTriggerExistenceTest;
     WriteMethod     write_mteTriggerExistenceStartup;
     WriteMethod     write_mteTriggerExistenceObjectsOwner;
     WriteMethod     write_mteTriggerExistenceObjects;
     WriteMethod     write_mteTriggerExistenceEventOwner;
     WriteMethod     write_mteTriggerExistenceEvent;
#endif /* !NETSNMP_NO_WRITE_SUPPORT */

#endif                          /* _MIBGROUP_MTETRIGGEREXISTENCETABLE_H */
