//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/AXElement.h>

#import <AccessibilityFocusEngine/AXElementNamesItem-Protocol.h>

@class NSString;

@interface AXElement (AXFocusEngine) <AXElementNamesItem>

@property (readonly, nonatomic) AXElement *applicationForHostFocusSystem;
@property (readonly, nonatomic) AXElement *applicationForRemoteFocusSystem;
@property (readonly, nonatomic) BOOL applicationIsExtension;
@property (readonly, nonatomic) AXElement *currentFocusElement;
@property (readonly, nonatomic) struct CGRect elementFrame;
@property (readonly, nonatomic) struct CGSize elementLabelContainerSize;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) BOOL hasRemoteFocusSystem;
@property (strong, nonatomic) NSString *typeaheadQueryString;

- (void)focusOnRemoteSceneID;
- (id)remoteSceneID;
@end
