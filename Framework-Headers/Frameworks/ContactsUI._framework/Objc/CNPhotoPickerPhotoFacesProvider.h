//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProvider-Protocol.h>

@class CNVisualIdentity, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPhotoFacesProvider : NSObject <CNPhotoPickerProvider>
{
    NSString *_identifier;
    CNVisualIdentity *_visualIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;

- (void).cxx_destruct;
- (struct CGRect)cropRectForAsset:(id)arg1 face:(id)arg2;
- (id)getItemsFromPhotoLibraryWithItemDelegate:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;

@end
