//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface PMLPreinstalledPlansBuilder : NSObject
{
    NSMutableArray *_plans;
    NSMutableArray *_metadata;
    NSDictionary *_metadataEnvelope;
}

- (void).cxx_destruct;
- (void)addPlan:(id)arg1 requiringSessions:(id)arg2 label:(unsigned long long)arg3 minCount:(unsigned long long)arg4;
- (id)init;
- (void)write:(id)arg1 asBinaryPlistToPath:(id)arg2;
- (void)writeToDirectory:(id)arg1;

@end
