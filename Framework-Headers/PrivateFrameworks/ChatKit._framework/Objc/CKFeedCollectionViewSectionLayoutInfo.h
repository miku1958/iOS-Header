//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject
{
    BOOL _hidden;
    NSArray *_fixedLayoutAttributes;
    NSArray *_tileLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    long long _sectionType;
    long long _previousVisibleSection;
    long long _nextVisibleSection;
    long long _firstJoinedSection;
    long long _lastJoinedSection;
    id _groupID;
    long long _numberOfTilesOmitted;
    struct CGPoint _origin;
    struct CGSize _size;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct UIEdgeInsets _margins;
}

@property (nonatomic) long long firstJoinedSection; // @synthesize firstJoinedSection=_firstJoinedSection;
@property (strong, nonatomic) NSArray *fixedLayoutAttributes; // @synthesize fixedLayoutAttributes=_fixedLayoutAttributes;
@property (strong, nonatomic) NSArray *floatingLayoutAttributes; // @synthesize floatingLayoutAttributes=_floatingLayoutAttributes;
@property (nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property (readonly, nonatomic) struct CGRect frame;
@property (strong, nonatomic) id groupID; // @synthesize groupID=_groupID;
@property (nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (nonatomic) long long lastJoinedSection; // @synthesize lastJoinedSection=_lastJoinedSection;
@property (nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property (nonatomic) long long nextVisibleSection; // @synthesize nextVisibleSection=_nextVisibleSection;
@property (nonatomic) long long numberOfTilesOmitted; // @synthesize numberOfTilesOmitted=_numberOfTilesOmitted;
@property (nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property (nonatomic) long long previousVisibleSection; // @synthesize previousVisibleSection=_previousVisibleSection;
@property (nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (strong, nonatomic) NSArray *tileLayoutAttributes; // @synthesize tileLayoutAttributes=_tileLayoutAttributes;

- (void).cxx_destruct;
- (id)init;

@end

