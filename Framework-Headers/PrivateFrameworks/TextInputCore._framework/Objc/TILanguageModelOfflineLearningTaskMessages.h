//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask
{
    id<TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;
- (id)dataSource;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2;

@end

