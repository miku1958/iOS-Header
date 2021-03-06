//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICommandChange.h>

@class NSArray, _UICommandIdentifier;

__attribute__((visibility("hidden")))
@interface _UICommandItemInsertion : _UICommandChange
{
    NSArray *_fallbacks;
    NSArray *_insertsBefore;
    NSArray *_insertsAfter;
}

@property (readonly, nonatomic) _UICommandIdentifier *anchor; // @dynamic anchor;
@property (readonly, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
@property (readonly, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property (readonly, nonatomic) NSArray *insertsBefore; // @synthesize insertsBefore=_insertsBefore;

+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

