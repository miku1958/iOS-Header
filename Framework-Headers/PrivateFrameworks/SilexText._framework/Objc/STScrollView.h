//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDScrollView.h>

#import <SilexText/STAXElementOccluder-Protocol.h>

@class NSString, STAXCustomRotorProvider;
@protocol STScrollViewDelegate;

@interface STScrollView : TSDScrollView <STAXElementOccluder>
{
    id<STScrollViewDelegate> _scrollViewDelegate;
    STAXCustomRotorProvider *_customRotorProvider;
}

@property (strong, nonatomic) STAXCustomRotorProvider *customRotorProvider; // @synthesize customRotorProvider=_customRotorProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isBouncing;
@property (weak, nonatomic) id<STScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_accessibilityScrollingEnabled;
- (id)accessibilityCustomRotors;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)shouldOccludeAccessibilityElement:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

