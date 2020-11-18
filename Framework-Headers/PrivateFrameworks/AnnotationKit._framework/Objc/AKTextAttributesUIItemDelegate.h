//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKTextAttributesUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class AKTextAttributesViewController, NSString;

@interface AKTextAttributesUIItemDelegate : NSObject <AKUserInterfaceItem, AKTextAttributesUserInterfaceItem>
{
    AKTextAttributesViewController *_parentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) AKTextAttributesViewController *parentController; // @synthesize parentController=_parentController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)convertTextAttributes:(id)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (long long)tag;

@end

