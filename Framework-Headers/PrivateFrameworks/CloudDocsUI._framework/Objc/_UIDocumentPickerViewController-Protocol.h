//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>

@class NSArray, UIColor, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerViewController <NSObject>
- (void)_documentPickerDidDismiss;
- (void)_prepareForDisplayWithCompletion:(void (^)(struct CGSize))arg1;
- (void)_setAuxiliaryOptions:(NSArray *)arg1;
- (void)_setPickableTypes:(NSArray *)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setSourceIsManaged:(BOOL)arg1;
- (void)_setTintColor:(UIColor *)arg1;
- (void)_setUploadURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_showDefaultPicker;
@end

