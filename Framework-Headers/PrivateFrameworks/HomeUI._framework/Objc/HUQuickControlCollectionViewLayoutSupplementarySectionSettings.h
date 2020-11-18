//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NAIdentifiable-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@class NSString;

@interface HUQuickControlCollectionViewLayoutSupplementarySectionSettings : NSObject <NSCopying, NAIdentifiable>
{
    double _preferredHeight;
    struct UIEdgeInsets _sectionInset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property (nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property (readonly) Class superclass;

+ (id)na_identity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

