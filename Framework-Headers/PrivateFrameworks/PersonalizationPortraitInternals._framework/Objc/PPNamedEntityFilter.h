//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

@interface PPNamedEntityFilter : NSObject
{
    MLModel *_model;
}

- (void).cxx_destruct;
- (id)filterNamedEntityRecords:(id)arg1;
- (id)filterScoredNamedEntities:(id)arg1;
- (id)init;
- (id)initWithModel:(id)arg1;
- (BOOL)isAcceptableRecord:(id)arg1;

@end
