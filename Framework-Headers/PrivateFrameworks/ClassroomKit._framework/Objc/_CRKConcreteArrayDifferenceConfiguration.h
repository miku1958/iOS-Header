//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKArrayDifferenceConfiguration-Protocol.h>

@class NSString;

@interface _CRKConcreteArrayDifferenceConfiguration : NSObject <CRKArrayDifferenceConfiguration>
{
    CDUnknownBlockType _publishedItemsComparator;
    CDUnknownBlockType _incomingItemsIdentifierFunction;
    CDUnknownBlockType _publishedItemsIdentifierFunction;
    CDUnknownBlockType _liftingFunction;
    CDUnknownBlockType _updateBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType incomingItemsIdentifierFunction; // @synthesize incomingItemsIdentifierFunction=_incomingItemsIdentifierFunction;
@property (copy, nonatomic) CDUnknownBlockType liftingFunction; // @synthesize liftingFunction=_liftingFunction;
@property (copy, nonatomic) CDUnknownBlockType publishedItemsComparator; // @synthesize publishedItemsComparator=_publishedItemsComparator;
@property (copy, nonatomic) CDUnknownBlockType publishedItemsIdentifierFunction; // @synthesize publishedItemsIdentifierFunction=_publishedItemsIdentifierFunction;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;

- (void).cxx_destruct;

@end

