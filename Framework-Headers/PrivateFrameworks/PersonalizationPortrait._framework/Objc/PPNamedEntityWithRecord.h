//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPNamedEntity.h>

@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity
{
    PPNamedEntityRecord *_mostRelevantRecord;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4;
- (id)mostRelevantRecord;

@end

