//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPUnarchiver.h>

@interface TSPDatabaseUnarchiver : TSPUnarchiver
{
    unsigned long long _databaseVersion;
}

@property (readonly, nonatomic) unsigned long long preUFFVersion; // @synthesize preUFFVersion=_databaseVersion;

- (BOOL)canValidateReferences;
- (set_713dd2e1 *)filterIdentifiers:(const set_713dd2e1 *)arg1;
- (id)initWithMessageType:(unsigned int)arg1 message:(unique_ptr_1c88daa6)arg2 identifier:(long long)arg3 strongReferences:(unique_ptr_375828ba)arg4 databaseVersion:(unsigned long long)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8;
- (id)initWithMessageType:(unsigned int)arg1 message:(unique_ptr_1c88daa6)arg2 identifier:(long long)arg3 strongReferences:(unique_ptr_375828ba)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;

@end

