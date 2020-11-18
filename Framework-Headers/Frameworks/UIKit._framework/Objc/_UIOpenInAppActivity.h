//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/LSOpenResourceOperationDelegate-Protocol.h>

@class LSApplicationProxy, LSDocumentProxy, NSString;

__attribute__((visibility("hidden")))
@interface _UIOpenInAppActivity : UIActivity <LSOpenResourceOperationDelegate>
{
    BOOL _sourceIsManaged;
    BOOL _actionIsImport;
    LSApplicationProxy *_applicationProxy;
    LSDocumentProxy *_documentProxy;
}

@property (nonatomic) BOOL actionIsImport; // @synthesize actionIsImport=_actionIsImport;
@property (strong, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property (readonly) Class superclass;

+ (id)activitiesForFileURL:(id)arg1 sourceIsManaged:(BOOL)arg2;
+ (long long)activityCategory;
+ (void)enumerateAvailableApplicationsInPreferredOrderForOpeningDocument:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)openInActivitiesForItems:(id)arg1 sourceIsManaged:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (id)_firstMatchingDocumentProxyForActivityItems:(id)arg1;
- (id)_nonImportActivityTitle;
- (void)_performOpenWithUserInfo:(id)arg1;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 sourceIsManaged:(BOOL)arg3 actionIsImport:(BOOL)arg4;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end

