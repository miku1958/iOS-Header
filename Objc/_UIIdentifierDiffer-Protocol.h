//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexSet, NSSet;

@protocol _UIIdentifierDiffer <NSObject>

@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSSet *movePairs;

@end

