//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface CKSpeakerButton : UIButton
{
    BOOL _orientation;
    BOOL _speakerEnabled;
    BOOL _shouldShowText;
}

@property (nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
@property (nonatomic) BOOL shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property (nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;

+ (id)speakerImageWithOrientation:(BOOL)arg1 speakerEnabled:(BOOL)arg2 shouldShowText:(BOOL)arg3;
- (void)hideSpeakerText;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchUpInside:(id)arg1;
- (void)updateSpeakerImage;

@end

