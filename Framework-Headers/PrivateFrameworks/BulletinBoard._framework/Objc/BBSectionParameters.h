//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/BBUniquableObject-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBSectionIcon, BBSectionSubtypeParameters, NSLock, NSMutableDictionary, NSString;

@interface BBSectionParameters : NSObject <BBUniquableObject, NSSecureCoding>
{
    NSLock *_lock;
    NSString *_uniqueIdentifier;
    BOOL _showsSubtitle;
    BOOL _usesVariableLayout;
    BOOL _orderSectionUsingRecencyDate;
    BOOL _showsDateInFloatingLockScreenAlert;
    BOOL _displaysCriticalBulletins;
    unsigned long long _messageNumberOfLines;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
    NSString *_displayName;
    BBSectionIcon *_icon;
}

@property (strong, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) BOOL displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property (nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property (nonatomic) BOOL orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;
@property (nonatomic) BOOL showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;
@property (nonatomic) BOOL showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;

+ (id)addSectionParametersToCache:(id)arg1;
+ (id)copyCachedSectionParametersWithIdentifier:(id)arg1;
+ (void)removeSectionParametersFromCache:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)allSubtypes;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parametersForSubtype:(long long)arg1;
- (id)uniqueIdentifier;

@end
