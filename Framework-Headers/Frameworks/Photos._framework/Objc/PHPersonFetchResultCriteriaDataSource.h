//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOrderedSet.h>

#import <Photos/PHPersonClusterUsabilityCriteriaDataSource-Protocol.h>

@class NSString, PHFetchResult;

@interface PHPersonFetchResultCriteriaDataSource : NSOrderedSet <PHPersonClusterUsabilityCriteriaDataSource>
{
    PHFetchResult *_fetchResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)count;
- (long long)faceCountAtIndex:(unsigned long long)arg1;
- (id)initWithFetchResut:(id)arg1;

@end
