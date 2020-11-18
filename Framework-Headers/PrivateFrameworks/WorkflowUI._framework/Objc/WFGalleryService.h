//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICApp, NSString, WFAccessResource, WFImage;

@interface WFGalleryService : NSObject
{
    NSString *_name;
    WFImage *_icon;
    ICApp *_app;
    WFAccessResource *_accessResource;
}

@property (readonly, nonatomic) WFAccessResource *accessResource; // @synthesize accessResource=_accessResource;
@property (readonly, nonatomic) ICApp *app; // @synthesize app=_app;
@property (readonly, nonatomic) WFImage *icon; // @synthesize icon=_icon;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)serviceWithAccessResource:(id)arg1;
+ (id)serviceWithApp:(id)arg1;
+ (id)servicesForWorkflow:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
