//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHTemplateSource-Protocol.h>

@class NSString;
@protocol ACHTemplateSourceDelegate;

@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (readonly) Class superclass;

- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (BOOL)sourceShouldRunForDate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

