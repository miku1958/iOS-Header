//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInteractionPreviewContext-Protocol.h>

@class NSString, UIViewController;

@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext>
{
    UIViewController *_viewController;
    struct CGRect _sourceRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 sourceRect:(struct CGRect)arg2;

@end

