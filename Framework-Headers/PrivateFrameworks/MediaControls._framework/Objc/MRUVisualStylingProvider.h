//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MTVisualStylingProvider, NSHashTable, NSString, UIColor;

@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate>
{
    BOOL _supportsVibrancy;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tertiaryColor;
    UIColor *_quaternaryColor;
    UIColor *_separatorColor;
    NSHashTable *_observers;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (strong, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property (strong, nonatomic) UIColor *quaternaryColor; // @synthesize quaternaryColor=_quaternaryColor;
@property (strong, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property (strong, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsVibrancy; // @synthesize supportsVibrancy=_supportsVibrancy;
@property (strong, nonatomic) UIColor *tertiaryColor; // @synthesize tertiaryColor=_tertiaryColor;
@property (strong, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (double)alphaForNowPlayingStyle:(long long)arg1;
- (void)applyStyle:(long long)arg1 toView:(id)arg2;
- (void)applyStyle:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)blendModeForNowPlayingStyle:(long long)arg1;
- (id)colorForNowPlayingStyle:(long long)arg1;
- (id)init;
- (id)initWithVisualStylingProvider:(id)arg1;
- (void)notifyObservers;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)removeObserver:(id)arg1;
- (long long)visualStyleForNowPlayingStyle:(long long)arg1;

@end

