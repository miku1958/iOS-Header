//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionImageProvider-Protocol.h>

@class NSString;

@interface _CNUIUserActionImageProvider : NSObject <CNUIUserActionImageProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)imageForActionType:(id)arg1 imageStyle:(long long)arg2;
+ (id)imageForResource:(id)arg1;
+ (id)imageResourceBaseNameForActionType:(id)arg1;
+ (id)imageResourceNameForActionType:(id)arg1 style:(long long)arg2;
+ (id)imageResourceVariantNameForImageStyle:(long long)arg1;
+ (id)uncachedImageForResource:(id)arg1;

@end
