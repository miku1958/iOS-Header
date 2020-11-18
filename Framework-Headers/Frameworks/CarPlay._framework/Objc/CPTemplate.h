//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPBarButtonDelegate-Protocol.h>
#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPControlDelegate-Protocol.h>
#import <CarPlay/CPTemplateDelegate-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPBarButton, NAFuture, NSArray, NSString, NSUUID, UIImage;
@protocol CPBaseTemplateProviding, CPTemplateDelegate;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding>
{
    BOOL _showsTabBadge;
    BOOL _needsUpdate;
    CPBarButton *_backButton;
    id _userInfo;
    NSString *_tabTitle;
    UIImage *_tabImage;
    long long _tabSystemItem;
    id<CPBaseTemplateProviding> _templateProvider;
    NAFuture *_templateProviderFuture;
    NSUUID *_identifier;
    id<CPTemplateDelegate> _templateDelegate;
    NSArray *_internalLeadingBarButtons;
    NSArray *_internalTrailingBarButtons;
}

@property (strong, nonatomic) CPBarButton *backButton; // @synthesize backButton=_backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSArray *internalLeadingBarButtons; // @synthesize internalLeadingBarButtons=_internalLeadingBarButtons;
@property (strong, nonatomic) NSArray *internalTrailingBarButtons; // @synthesize internalTrailingBarButtons=_internalTrailingBarButtons;
@property (strong, nonatomic) NSArray *leadingNavigationBarButtons;
@property (nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property (nonatomic) BOOL showsTabBadge; // @synthesize showsTabBadge=_showsTabBadge;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImage *tabImage; // @synthesize tabImage=_tabImage;
@property (nonatomic) long long tabSystemItem; // @synthesize tabSystemItem=_tabSystemItem;
@property (copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property (weak, nonatomic) id<CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property (strong, nonatomic) id<CPBaseTemplateProviding> templateProvider; // @synthesize templateProvider=_templateProvider;
@property (strong, nonatomic) NAFuture *templateProviderFuture; // @synthesize templateProviderFuture=_templateProviderFuture;
@property (strong, nonatomic) NSArray *trailingNavigationBarButtons;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)barButton:(id)arg1 setImage:(id)arg2;
- (BOOL)barButton:(id)arg1 setTitle:(id)arg2;
- (void)connectTemplateProvider:(id)arg1;
- (BOOL)control:(id)arg1 setEnabled:(BOOL)arg2;
- (BOOL)control:(id)arg1 setSelected:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateTemplateProvider;
- (BOOL)isEqual:(id)arg1;
- (void)performUpdate;
- (void)setNeedsUpdate;
- (void)templateDidAppear:(id)arg1 animated:(BOOL)arg2;
- (void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2;
- (void)templateWillAppear:(id)arg1 animated:(BOOL)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2;

@end
