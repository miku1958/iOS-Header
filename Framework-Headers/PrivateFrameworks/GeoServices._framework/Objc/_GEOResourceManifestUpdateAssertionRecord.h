//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestUpdateAssertionRecord-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord>
{
    NSString *_process;
    NSString *_reason;
    double _creationTimestamp;
}

@property (readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *process; // @synthesize process=_process;
@property (readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;

@end

