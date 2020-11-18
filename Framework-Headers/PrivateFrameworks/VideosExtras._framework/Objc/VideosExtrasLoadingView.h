//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosExtras/IKAppDocumentDelegate-Protocol.h>

@class IKAppDocument, NSDictionary, NSString, VideosExtrasActivityIndicator;
@protocol VideosExtrasLoadingViewDelegate;

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate>
{
    IKAppDocument *_document;
    NSDictionary *_options;
    VideosExtrasActivityIndicator *_activityIndicator;
    id<VideosExtrasLoadingViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_show;
- (void)cancelCountdownToVisibility;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)startCountdownToVisibilityWithInterval:(double)arg1;

@end
