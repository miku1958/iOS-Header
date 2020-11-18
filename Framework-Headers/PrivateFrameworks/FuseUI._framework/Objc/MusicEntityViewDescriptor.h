//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>

@class MusicEntityViewContentDescriptor, UIColor;
@protocol MusicEntityProviding;

@interface MusicEntityViewDescriptor : NSObject <NSCopying>
{
    BOOL _trailingSeparatorInsetFollowsLayoutInsets;
    BOOL _defaultAllowsSectionHeaders;
    BOOL _sectionHeaderViewsFloat;
    BOOL _usesUppercaseLettersForSectionHeaderTitles;
    MusicEntityViewContentDescriptor *_defaultContentDescriptor;
    id<MusicEntityProviding> _entityProvider;
    long long _scrollIndicatorStyle;
    MusicEntityViewContentDescriptor *_defaultSectionHeaderContentDescriptor;
    long long _sectionHeaderHairlineStyleForNonFloatingState;
    UIColor *_sectionHeaderTextColorForNonFloatingState;
    double _sectionHeaderTopContentInset;
}

@property (nonatomic) BOOL defaultAllowsSectionHeaders; // @synthesize defaultAllowsSectionHeaders=_defaultAllowsSectionHeaders;
@property (strong, nonatomic) MusicEntityViewContentDescriptor *defaultContentDescriptor; // @synthesize defaultContentDescriptor=_defaultContentDescriptor;
@property (strong, nonatomic) MusicEntityViewContentDescriptor *defaultSectionHeaderContentDescriptor; // @synthesize defaultSectionHeaderContentDescriptor=_defaultSectionHeaderContentDescriptor;
@property (strong, nonatomic) id<MusicEntityProviding> entityProvider; // @synthesize entityProvider=_entityProvider;
@property (nonatomic) long long scrollIndicatorStyle; // @synthesize scrollIndicatorStyle=_scrollIndicatorStyle;
@property (nonatomic) long long sectionHeaderHairlineStyleForNonFloatingState; // @synthesize sectionHeaderHairlineStyleForNonFloatingState=_sectionHeaderHairlineStyleForNonFloatingState;
@property (strong, nonatomic) UIColor *sectionHeaderTextColorForNonFloatingState; // @synthesize sectionHeaderTextColorForNonFloatingState=_sectionHeaderTextColorForNonFloatingState;
@property (nonatomic) double sectionHeaderTopContentInset; // @synthesize sectionHeaderTopContentInset=_sectionHeaderTopContentInset;
@property (nonatomic) BOOL sectionHeaderViewsFloat; // @synthesize sectionHeaderViewsFloat=_sectionHeaderViewsFloat;
@property (nonatomic) BOOL trailingSeparatorInsetFollowsLayoutInsets; // @synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets;
@property (nonatomic) BOOL usesUppercaseLettersForSectionHeaderTitles; // @synthesize usesUppercaseLettersForSectionHeaderTitles=_usesUppercaseLettersForSectionHeaderTitles;

- (void).cxx_destruct;
- (BOOL)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateContentDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionHeaderContentDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)includesShuffleAction;
- (id)init;
- (id)sectionHeaderContentDescriptorForSectionIndex:(unsigned long long)arg1;

@end
