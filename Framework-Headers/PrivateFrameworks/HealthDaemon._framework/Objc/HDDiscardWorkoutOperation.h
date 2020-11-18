//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation
{
    NSUUID *_builderIdentifier;
}

@property (readonly, copy, nonatomic) NSUUID *builderIdentifier; // @synthesize builderIdentifier=_builderIdentifier;

- (void).cxx_destruct;
- (id)initWithBuilderIdentifier:(id)arg1;
- (BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end

