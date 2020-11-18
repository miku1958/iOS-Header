//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIButton.h>

#import <VideosUI/VUIUpNextButtonProtocol-Protocol.h>

@class NSString, VUIUpNextButtonProperties;

__attribute__((visibility("hidden")))
@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol>
{
    VUIUpNextButtonProperties *_properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUIUpNextButtonProperties *properties; // @synthesize properties=_properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_selectButtonAction:(id)arg1 eventType:(id)arg2;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;
- (void)updateWithElement:(id)arg1;

@end

