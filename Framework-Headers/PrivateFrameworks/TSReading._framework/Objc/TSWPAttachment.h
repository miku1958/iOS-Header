//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSDOwningAttachment-Protocol.h>
#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSPCopying-Protocol.h>

@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying>
{
    TSWPStorage *_parentStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long enabledKnobMask;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isAttachedToBodyText;
@property (readonly, nonatomic) BOOL isDrawable;
@property (readonly, nonatomic) BOOL isPartitioned;
@property (readonly, nonatomic) BOOL isSearchable;
@property (nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
@property (readonly, nonatomic) Class positionerClass;
@property (readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (unsigned int)attributeArrayKind;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)changesWithPageCount;
- (BOOL)changesWithPageNumber;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (void)infoChanged;
- (id)initWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

