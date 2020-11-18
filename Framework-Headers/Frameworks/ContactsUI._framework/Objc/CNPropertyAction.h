//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNPropertyGroupItem, NSArray;
@protocol CNPropertyActionDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyAction : CNContactAction
{
    NSArray *_propertyItems;
}

@property (weak, nonatomic) id<CNPropertyActionDelegate> delegate; // @dynamic delegate;
@property (readonly, nonatomic) CNPropertyGroupItem *propertyItem;
@property (copy, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;
- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)presentDisambiguationAlertWithSender:(id)arg1;

@end
