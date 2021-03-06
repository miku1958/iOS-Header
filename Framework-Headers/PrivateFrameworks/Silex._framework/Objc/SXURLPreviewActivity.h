//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionPreviewActivity-Protocol.h>

@class NSString, NSURL;
@protocol SXURLPreviewing;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity>
{
    id<SXURLPreviewing> _URLPreviewing;
    NSURL *_URL;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) id<SXURLPreviewing> URLPreviewing; // @synthesize URLPreviewing=_URLPreviewing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)commitViewController:(id)arg1 action:(id)arg2;
- (id)initWithURLPreviewing:(id)arg1 URL:(id)arg2;
- (id)previewViewControllerForAction:(id)arg1;

@end

