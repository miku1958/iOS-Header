//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKExperimentalFeature : NSObject <WKObject>
{
    struct ObjectStorage<API::ExperimentalFeature> _experimentalFeature;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;

@end

