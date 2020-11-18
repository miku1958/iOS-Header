//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSLayoutRelationship, _NSLayoutRelationshipNodeParent;

@interface _NSLayoutRelationshipNode : NSObject
{
    id<NSLayoutRelationship> _representedRelationship;
    id<_NSLayoutRelationshipNodeParent> _parentNode;
}

@property id<_NSLayoutRelationshipNodeParent> parentNode; // @synthesize parentNode=_parentNode;
@property (copy) id<NSLayoutRelationship> representedRelationship; // @synthesize representedRelationship=_representedRelationship;

- (void)dealloc;
- (id)description;
- (id)initWithRelationship:(id)arg1;

@end

