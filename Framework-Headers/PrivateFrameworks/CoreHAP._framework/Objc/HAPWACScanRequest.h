//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSCopying-Protocol.h>

@class HAPWACScanFilter, NSUUID;

@interface HAPWACScanRequest : HMFObject <NSCopying>
{
    NSUUID *_uuid;
    unsigned long long _filterMethod;
    HAPWACScanFilter *_filter;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) HAPWACScanFilter *filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) unsigned long long filterMethod; // @synthesize filterMethod=_filterMethod;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToWACScanRequest:(id)arg1;

@end

