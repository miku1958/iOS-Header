//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKFileDataAccessor.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor
{
    NPKCompanionAgentConnection *_connection;
    NSString *_objectUniqueID;
}

@property (strong, nonatomic) NPKCompanionAgentConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSString *objectUniqueID; // @synthesize objectUniqueID=_objectUniqueID;

- (void).cxx_destruct;
- (void)updateSettings:(unsigned long long)arg1;

@end

