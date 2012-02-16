//
//  Producto.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Producto : NSManagedObject

@property (nonatomic, retain) NSNumber * id_cate;
@property (nonatomic, retain) NSNumber * id_prod;
@property (nonatomic, retain) NSString * nombre_prod;
@property (nonatomic, retain) NSString * notas_prod;
@property (nonatomic, retain) NSNumber * orden_prod;

@end
