//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSSet, NSString;

@interface WKWebsiteDataRecord : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;

@end

