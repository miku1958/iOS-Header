//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem, MISSING_TYPE;

@interface _TtC26DocumentManagerExecutables21DOCInteractionManager : NSObject
{
    MISSING_TYPE *lastOpenedItem;
    MISSING_TYPE *lastSelectedItem;
}

@property (nonatomic, strong) FPItem *lastOpenedItem; // @synthesize lastOpenedItem;
@property (nonatomic, strong) FPItem *lastSelectedItem; // @synthesize lastSelectedItem;

+ (void)clearSharedControllerFor:(id)arg1;
+ (void)setSharedManagerWith:(id)arg1 to:(id)arg2;
+ (id)sharedManagerFor:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

