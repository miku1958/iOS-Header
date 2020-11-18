//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStyle, CNQuickActionsManager, NSString, UIColor, UIImage, UIView;

@interface CNQuickAction : NSObject
{
    BOOL _useDuetIfAvailable;
    BOOL _isLongPress;
    BOOL _enabled;
    BOOL _cached;
    BOOL _dismissesWithAnimation;
    NSString *_title;
    NSString *_category;
    UIColor *_imageTintColor;
    CNQuickActionsManager *_manager;
    NSString *_identifier;
    UIImage *_image;
    UIView *_sourceView;
    unsigned long long _score;
    CDUnknownBlockType _performBlock;
    CNContactStyle *_previousStyle;
}

@property (nonatomic, getter=isBackAction) BOOL backAction;
@property (nonatomic) BOOL cached; // @synthesize cached=_cached;
@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (nonatomic) BOOL dismissesWithAnimation; // @synthesize dismissesWithAnimation=_dismissesWithAnimation;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) NSString *globalIdentifier;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property (nonatomic) BOOL isLongPress; // @synthesize isLongPress=_isLongPress;
@property (weak, nonatomic) CNQuickActionsManager *manager; // @synthesize manager=_manager;
@property (copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
@property (strong, nonatomic) CNContactStyle *previousStyle; // @synthesize previousStyle=_previousStyle;
@property (nonatomic) unsigned long long score; // @synthesize score=_score;
@property (weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) BOOL useDuetIfAvailable; // @synthesize useDuetIfAvailable=_useDuetIfAvailable;

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)defaultTitleForActionInCategory:(id)arg1 context:(long long)arg2;
+ (id)possibleTitlesForActionsInCategories:(id)arg1 context:(long long)arg2;
+ (BOOL)reallyPerform;
- (void).cxx_destruct;
- (void)cancel;
- (id)defaultTitleForContext:(long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)imageForContext:(long long)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)perform;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;
- (id)userActionType;

@end
