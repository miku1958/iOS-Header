//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SUICSiriLanguageDelegate;

@interface SUICSiriLanguage : NSObject
{
    BOOL _setupAssistantHasCompletedInitialRunChecked;
    BOOL _setupAssistantHasCompletedInitialRunAvailable;
    NSString *_spokenLanguageCode;
    id<SUICSiriLanguageDelegate> _delegate;
}

@property (readonly, weak, nonatomic, getter=_delegate) id<SUICSiriLanguageDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) BOOL setupAssistantHasCompletedInitialRunAvailable; // @synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable;
@property (nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked; // @synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode; // @synthesize spokenLanguageCode=_spokenLanguageCode;

- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_updateSpokenLanguageCode;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

