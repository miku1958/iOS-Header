//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction
{
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct {
        unsigned int initializing:1;
        unsigned int confirmed:1;
    } _confirmFlags;
}

- (void)_setConfirmed:(BOOL)arg1;
- (int)completionType;
- (id)confirmedAction;
- (void)dealloc;
- (id)deniedAction;
- (id)init;
- (id)initWithModelIdentifier:(id)arg1;
- (void)setConfirmedAction:(id)arg1;
- (void)setDeniedAction:(id)arg1;

@end

