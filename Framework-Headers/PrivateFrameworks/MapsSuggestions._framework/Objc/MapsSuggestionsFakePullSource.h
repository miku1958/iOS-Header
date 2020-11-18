//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    struct ReadWriteQueue _readwrite;
    NSArray *_entriesToPull;
    NSSet *_fakeCanProduceEntriesOfType;
    unsigned long long _calledStart;
    unsigned long long _calledUpdateSuggestionEntries;
    unsigned long long _calledStop;
    unsigned long long _calledUserRemove;
    unsigned long long _calledFeedbackForEntry;
    unsigned long long _calledfeedbackForMapItem;
    unsigned long long _calledfeedbackForContact;
    CDUnknownBlockType _handlerForFeedback;
    long long _lastUsedRemovalBehavior;
    unsigned long long _totalAdded;
    double _configureFrequency;
    BOOL _configureSendCopies;
}

@property (readonly, nonatomic) unsigned long long calledFeedbackForEntry;
@property (readonly, nonatomic) unsigned long long calledStart;
@property (readonly, nonatomic) unsigned long long calledStop;
@property (readonly, nonatomic) unsigned long long calledUpdateSuggestionEntries;
@property (readonly, nonatomic) unsigned long long calledUserRemove;
@property (readonly, nonatomic) unsigned long long calledfeedbackForContact;
@property (readonly, nonatomic) unsigned long long calledfeedbackForMapItem;
@property (nonatomic) double configureFrequency; // @synthesize configureFrequency=_configureFrequency;
@property (nonatomic) BOOL configureSendCopies; // @synthesize configureSendCopies=_configureSendCopies;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long lastUsedRemovalBehavior;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long totalAdded;
@property (readonly, nonatomic) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (void)configureCanProduceEntriesOfType:(id)arg1;
- (void)configureHandlerForFeedbackBlock:(CDUnknownBlockType)arg1;
- (void)configurePullResponseEntries:(id)arg1;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (void)pushEntries:(id)arg1;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;

@end
