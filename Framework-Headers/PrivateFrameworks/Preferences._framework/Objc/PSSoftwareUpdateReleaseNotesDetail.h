//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate>
{
    NSString *_releaseNotes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)loadView;
- (id)specifiers;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end

