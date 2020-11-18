//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreModelRow-Protocol.h>

@class AVTCoreModelPairing, AVTCoreModelRowOptions, NSOrderedSet, NSString;

@interface AVTCoreModelPresetsRow : NSObject <AVTCoreModelRow>
{
    NSString *_identifier;
    NSString *_title;
    AVTCoreModelRowOptions *_options;
    AVTCoreModelPairing *_pairing;
    NSOrderedSet *_representedTags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) AVTCoreModelRowOptions *options; // @synthesize options=_options;
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // @synthesize pairing=_pairing;
@property (readonly, copy, nonatomic) NSOrderedSet *representedTags; // @synthesize representedTags=_representedTags;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4 identifier:(id)arg5;

@end
