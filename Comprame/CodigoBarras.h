//
//  CodigoBarras.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface CodigoBarras : NSManagedObject

@property (nonatomic, retain) NSString * cod_cbar;
@property (nonatomic, retain) NSString * imagen_cbar;
@property (nonatomic, retain) NSString * nombre_cbar;

@end
