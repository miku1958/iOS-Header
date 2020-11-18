//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/WFDatabaseObjectObserver-Protocol.h>

@class NSOrderedSet;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface WFSiriWorkflowVocabularyUpdater : NSObject <WFDatabaseObjectObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<VCDatabaseProvider> _databaseProvider;
    NSOrderedSet *_speakableStrings;
}

@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy, nonatomic) NSOrderedSet *speakableStrings; // @synthesize speakableStrings=_speakableStrings;

- (void).cxx_destruct;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (void)queue_startIfPossible;
- (void)queue_updateFromDatabase:(id)arg1;
- (void)startIfPossible;
- (void)updateIfPossible;

@end
