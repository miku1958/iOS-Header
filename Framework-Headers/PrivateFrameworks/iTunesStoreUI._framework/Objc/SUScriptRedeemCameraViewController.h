//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SURedeemCameraViewController, WebScriptObject;

@interface SUScriptRedeemCameraViewController : SUScriptObject
{
    NSString *_backButtonTitle;
    WebScriptObject *_codeHandler;
    SURedeemCameraViewController *_redeemCameraViewController;
}

@property (strong, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property (strong, nonatomic) WebScriptObject *codeHandler; // @synthesize codeHandler=_codeHandler;
@property (weak, nonatomic) SURedeemCameraViewController *redeemCameraViewController; // @synthesize redeemCameraViewController=_redeemCameraViewController;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (void).cxx_destruct;
- (id)_className;
- (void)_performAction:(long long)arg1 withObject:(id)arg2;
- (id)attributeKeys;
- (void)codeDetected:(id)arg1;
- (void)dismiss;
- (void)pauseCamera;
- (void)present;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)resumeCamera;
- (id)scriptAttributeKeys;

@end

