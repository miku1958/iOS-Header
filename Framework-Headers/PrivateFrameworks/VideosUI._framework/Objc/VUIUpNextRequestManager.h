//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIUpNextRequestManager : NSObject
{
    NSMutableDictionary *_ongoingCanonicalIDOperationDictionary;
}

@property (strong, nonatomic) NSMutableDictionary *ongoingCanonicalIDOperationDictionary; // @synthesize ongoingCanonicalIDOperationDictionary=_ongoingCanonicalIDOperationDictionary;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2;

@end

