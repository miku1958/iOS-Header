//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class FBSDisplay, NSArray, NSMutableArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSMutableArray *_elements;
    FBSDisplay *_display;
    unsigned long long _displayType;
    long long _backlightLevel;
    long long _interfaceOrientation;
    struct CGRect _bounds;
    struct CGRect _referenceBounds;
}

@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (nonatomic) long long displayBacklightLevel; // @synthesize displayBacklightLevel=_backlightLevel;
@property (nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property (copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (readonly, nonatomic) struct CGRect referenceBounds; // @synthesize referenceBounds=_referenceBounds;
@property (readonly) Class superclass;

- (id)_initWithElements:(id)arg1;
- (void)_sortElements;
- (void)addElement:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)finalizeLayout;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeElement:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

