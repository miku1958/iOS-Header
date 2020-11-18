//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <SafariServices/LSOpenResourceOperationDelegate-Protocol.h>

@class LSApplicationProxy, NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate>
{
    LSApplicationProxy *_appProxy;
    NSString *_filePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)performActivity;

@end
